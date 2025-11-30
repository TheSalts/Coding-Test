/**
 * 
 * @param {number[][]} points 
 * @param {number[][]} routes 
 * @returns {number}
 */
function solution(points, routes) {
    let answer = 0, done = 0;
    let robots = [];
    for (let i = 0; i < routes.length; i++) {
        robots.push({
            index: i,
            currentPos: points[routes[i][0] - 1],
            endPos: points[routes[i][1] - 1],
            route: routes[i],
            isEnd: false,
            waitEnd: false
        })
        if (robots[i].route.length === 1)
            robots[i].waitEnd = true;
    }
    let cur = [];
    for (let robot of robots) {
        if (robot.isEnd) continue;
        cur.push(robot.currentPos);
    }
    answer += checkHit(cur);
    while (done != robots.length) {
        for (let robot of robots) {
            if (robot.isEnd) continue;
            let next = nextMove(robot.currentPos, robot.endPos);
            if (next[2]) {
                if (robot.waitEnd) {
                    robot.isEnd = true;
                    done++;
                }
                robot.route.shift();
                robot.endPos = points[robot.route[1] - 1]
                if (robot.route.length === 1) {
                    robot.waitEnd = true;
                    robot.endPos = points[robot.route[0] - 1]
                }
                next.pop();
            }
            robot.currentPos = next;
        }
        let cur = [];
        for (let robot of robots) {
            if (!robot.isEnd) cur.push(robot.currentPos);
        }
        answer += checkHit(cur);
    }
    return answer;
}

function nextMove(start, end) {
    const [startX, startY] = start;
    const [endX, endY] = end;
    if (startX === endX && startY === endY) return [startX, startY, true];
    let x = 0, y = 0;
    if (startX === endX) {
        if (startY < endY) y++;
        else y--;
    } else if (startX < endX) x++;
    else x--;
    if (startX + x === endX && startY + y === endY) return [startX + x, startY + y, true];
    return [startX + x, startY + y];
}
function checkHit(arr) {
    let map = new Map();
    arr.forEach(item => {
        const key = JSON.stringify(item);
        map.set(key, map.get(key) + 1 || 1);
    })
    let count = 0;
    map.forEach((value, key) => {
        if (value > 1) count++;
    })
    return count;
}
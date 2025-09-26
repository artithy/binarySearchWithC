let A = ['a', 'c', 'd', 'e', 'g', 'k', 'm'];
let target = 'A';

let low = 0;
let high = A.length - 1;
let found = false;

while (low <= high) {
    let mid = parseInt((low + high) / 2);
    console.log(`Low: ${low}, High: ${high}, Mid: ${mid}, A[Mid]: ${A[mid]}`);

    if (A[mid] === target) {
        console.log(`Element ${target} found at index ${mid}`);
        found = true;
        break;
    } else if (A[mid] < target) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
}

if (!found) {
    console.log(`Element ${target} not found in the array`);
}

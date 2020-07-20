const convertCamelCase = (str) => {
  str = str.toLowerCase();
  let strRes = '';
  for (let i = 0; i < str.length; i++) {
    if (str[i] === '_') {
      strRes = strRes + str[i + 1].toUpperCase();
      i++;
    } else {
      strRes = strRes + str[i];
    }
  }
  return strRes;
};

const types = [
  'LOGIN_CUSTOMER',
  'LOGIN_TEACHER',
  'REGISTER',

  'GET_INFO_FIRST_LOAD',
  'LOGOUT',
  'GET_CUSTOMER_INFO',
  'ADD_STUDENT',
  'TEACHER_JOIN_US',
  'CHANGE_PASSWORD_CUSTOMER',
  'CREATE_APPOINTMENT_ONLINE',
  'GET_TEACHER_INFO',
  'CHANGE_PASSWORD_TEACHER',
  'CHANGE_TEACHER_INFO',

  // CENTERS
  'GET_ALL_CENTER',
  'GET_CENTER_BY_ID',

  // SCHEDULE STUDENT
  'GET_ALL_SCHEDULE_STUDENT',

  // ENROLLS
  'ENROLLS_ADD_CART',
  'ENROLLS_GET_ALL',
  'ENROLLS_DELETE',
  'ENROLLS_UPDATE_PRICE',
  'GET_PAYMENTS_AMOUNT',

  'CHANGE_CUSTOMER_INFO',
  'CHANGE_STUDENT_INFO',
  'CHOOSE_AVATAR',

  //GROUP
  'GET_ALL_GROUP',
  'GET_ALL_SUBJECTS',
  'GET_GROUP_BY_ID',
];

const TYPES = types.reduce((accumulator, currentValue) => {
  const typeSuccess = `${currentValue}_SUCCESS`;
  const typeRequest = `${currentValue}_REQUEST`;
  const typeFailure = `${currentValue}_FAILURE`;

  accumulator[currentValue] = currentValue;
  accumulator[typeSuccess] = typeSuccess;
  accumulator[typeRequest] = typeRequest;
  accumulator[typeFailure] = typeFailure;
  return accumulator;
}, {});

console.log('[TYPES]', TYPES);

//create constant

//eg:  GET_GROUP_BY_ID_SUCCESS: 'GET_GROUP_BY_ID_SUCCESS'

const actions = types.reduce((accumulator, currentValue) => {
  accumulator[convertCamelCase(currentValue)] = (data, callback) => ({
    type: currentValue,
    data,
    callback,
  });
  return accumulator;
}, {});

console.log(actions, '[actions]');

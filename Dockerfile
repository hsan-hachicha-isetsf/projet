# pull the base image
FROM node:16
COPY package.json .
RUN npm install

# add app
COPY . ./
EXPOSE 3001
# start app
CMD ["npm", "start"]
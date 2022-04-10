# pull the base image
FROM node:alpine
COPY package.json .
RUN npm install

# add app
COPY . ./
EXPOSE 3001
# start app
CMD ["npm", "start"]
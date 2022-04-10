import multer from 'multer';

import fs from 'fs';

export const upload= (target) => {
              const path = `src/upload/images/${target}/`;
              var storage = multer.diskStorage({
                     destination: function (req, file, cb) {
                            fs.mkdirSync(path, { recursive: true });
                            cb(null, path);
                     },
                     filename: function (req, file, cb) {
                            cb(null, file.originalname);
                     },
              });

              return multer({ storage: storage }).single('image');
      
};
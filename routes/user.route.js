
import express from 'express';

import { createUser,getuserBYEmail,getuserBYEmailUser,getusers,RefreshToken} from '../controllers/user.controller.js';

const router = express.Router();

router.post('/', createUser);

router.post('/login', getuserBYEmail);
router.post('/loginuser', getuserBYEmailUser);

router.get("/",getusers);
router.post('/refreshToken/',RefreshToken);

export default router;

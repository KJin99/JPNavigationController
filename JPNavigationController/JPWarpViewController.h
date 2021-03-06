/*
 * This file is part of the JPNavigationController package.
 * (c) NewPan <13246884282@163.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * Click https://github.com/Chris-Pan
 * or http://www.jianshu.com/users/e2f2d779c022/latest_articles to contact me.
 */

/**
 * This class be used for warping the ViewController from user by UINavigationController, then warp the UINavigationController by UIViewController and pass the overall ViewController back. Wanna know more details please see http://www.jianshu.com/p/88bc827f0692
 * 这个类负责将用户的ViewController包装一层导航控制器, 再将这个导航控制器外面包装一层ViewController, 并将包装好的控制器返回.具体细节请看我的简书文章http://www.jianshu.com/p/88bc827f0692
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JPWarpViewController : UIViewController

/**
 * The view Controller user passed in(the view controller be pushed in navigationController's stack now).
 * Use for help find the viewController wanna pop to in method popToViewController:animated:.
 *
 * @see jp_rootNavigationController
 */
@property(nonatomic, weak, readonly)UIViewController *jp_passInViewController;

/**
 * This method be used for warping the ViewController from user by UINavigationController, then warp the UINavigationController by UIViewController and pass the overall ViewController back. Wanna know more details please see http://www.jianshu.com/p/88bc827f0692.
 *
 * @param viewController    The viewController need be warped.
 *
 * @reseult                 The viewController be warped.
 */
-(JPWarpViewController *)warpViewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END

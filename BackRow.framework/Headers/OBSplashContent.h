/* Runtime dump - OBSplashContent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface OBSplashContent : NSObject
{
    NSString * _text;
    NSArray * _bullets;
}

@property (copy) NSString * text;
@property (copy) NSArray * bullets;

- (NSArray *)bullets;
- (void)setBullets:(NSArray *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;

@end

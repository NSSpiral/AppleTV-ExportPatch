/* Runtime dump - BRResolution
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRType.h>
@interface BRResolution : BRType

+ (BRResolution *)HD720p;
+ (BRResolution *)SD480i;
+ (BRResolution *)SD576i;
+ (BRResolution *)ED480p;
+ (BRResolution *)ED576p;
+ (BRResolution *)HD1080i;
+ (int)compareResolution:(id)arg0 toResolution:(BRResolution *)arg1;
+ (void)initialize;

@end

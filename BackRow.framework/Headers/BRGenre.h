/* Runtime dump - BRGenre
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRType.h>
@interface BRGenre : BRType

+ (BRGenre *)classical;
+ (BRGenre *)rock;
+ (BRGenre *)pop;

- (NSString *)displayString;

@end

/* Runtime dump - BRAccountType
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRType.h>
@interface BRAccountType : BRType

+ (BRAccountType *)iTunes;
+ (BRAccountType *)homeShare;
+ (BRAccountType *)flickr;
+ (char)airTunes;
+ (BRAccountType *)cupid;
+ (BRAccountType *)youTube;
+ (BRAccountType *)sedona;
+ (BRAccountType *)dotMac;
+ (BRAccountType *)iTunesSandbox;

- (NSString *)description;

@end

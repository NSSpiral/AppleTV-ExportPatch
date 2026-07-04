/* Runtime dump - NetflixDevice
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;

@class Netflix, NetflixNrdObjectCallback;
@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol>
{
    Netflix * netflix_;
}

@property (readonly) NSString * softwareVersion;
@property (readonly) unsigned int certificationVersion;
@property (readonly) NSString * ESNPrefix;
@property (readonly) NSMutableDictionary * SDKVersion;
@property (readonly) NSString * ESN;
@property (readonly) NSString * language;
@property (readonly) unsigned int PC_NONE;
@property (readonly) unsigned int PC_PIN;
@property (readonly) unsigned int PC_NATIVE;
@property (copy) NSMutableArray * UILanguages;
@property (readonly) NSString * parentalControlRating;
@property (readonly) unsigned int parentalControlOverrideType;
@property (readonly) NSDictionary * capability;
@property (readonly) NSDictionary * videoOutput;
@property (readonly) char isScreenSaverOn;
@property (retain) Netflix * netflix;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixDevice *)sharedInstance;

- (void)setUILanguages:(id)arg0;
- (unsigned int)certificationVersion;
- (NSString *)softwareVersion;
- (NSDictionary *)capability;
- (NSDictionary *)videoOutput;
- (NSString *)parentalControlRating;
- (void)updateProperty:(NSString *)arg0 value:(NSObject *)arg1;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (NSString *)ESNPrefix;
- (NSString *)ESN;
- (NSMutableDictionary *)SDKVersion;
- (unsigned int)PC_NONE;
- (unsigned int)PC_PIN;
- (unsigned int)PC_NATIVE;
- (unsigned int)parentalControlOverrideType;
- (char)isScreenSaverOn;
- (void)setUIVersion:(NSString *)arg0;
- (NSMutableArray *)UILanguages;
- (Netflix *)netflix;
- (void)setNetflix:(Netflix *)arg0;
- (void).cxx_destruct;
- (NSString *)language;

@end

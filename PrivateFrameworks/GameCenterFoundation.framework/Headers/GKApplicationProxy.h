/* Runtime dump - GKApplicationProxy
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationProxy : NSObject
{
    LSApplicationProxy * _lsProxy;
    NSDictionary * _metadata;
}

@property (readonly, retain, nonatomic) NSBundle * bundle;
@property (readonly, retain, nonatomic) NSString * bundleVersion;
@property (readonly, retain, nonatomic) NSString * bundleID;
@property (readonly, retain, nonatomic) NSNumber * adamID;
@property (readonly, retain, nonatomic) NSNumber * externalVersion;
@property (readonly, retain, nonatomic) NSDate * purchaseDate;
@property (readonly, nonatomic) char restricted;
@property (readonly, nonatomic) char gameCenterEnabled;
@property (readonly, nonatomic) char installed;
@property (retain, nonatomic) LSApplicationProxy * lsProxy;
@property (retain, nonatomic) NSDictionary * metadata;

+ (NSURL *)metadataForBundleURL:(NSURL *)arg0;

- (char)isInstalled;
- (void)dealloc;
- (NSURL *)bundleURL;
- (NSBundle *)bundle;
- (NSString *)bundleID;
- (GKApplicationProxy *)initWithProxy:(NSObject *)arg0;
- (NSNumber *)externalVersion;
- (GKApplicationProxy *)initWithBundleID:(NSString *)arg0;
- (void)setLsProxy:(LSApplicationProxy *)arg0;
- (LSApplicationProxy *)lsProxy;
- (NSString *)bundleVersion;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (char)isRestricted;
- (NSDate *)purchaseDate;
- (char)isGameCenterEnabled;
- (NSNumber *)adamID;

@end

/* Runtime dump - FTServerBag
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTServerBag : NSObject
{
    int _type;
}

@property (readonly, retain) NSURL * bagURL;
@property (readonly, retain) NSString * apsEnvironmentName;
@property (readonly) char allowSelfSignedCertificates;
@property (readonly) char allowUnsignedBags;
@property (readonly) char isLoaded;
@property (readonly) char isLoading;
@property (readonly) char isInDebilitatedMode;
@property (readonly) char isServerAvailable;

+ (FTServerBag *)sharedInstance;
+ (NSObject *)_sharedInstanceForType:(int)arg0;
+ (FTServerBag *)sharedInstanceForBagType:(int)arg0;
+ (FTServerBag *)_sharedInstance;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (char)isLoading;
- (char)isLoaded;
- (FTServerBag *)initWithBagType:(int)arg0;
- (void)startBagLoad;
- (char)isServerAvailable;
- (NSString *)apsEnvironmentName;
- (NSDictionary *)_bag;
- (NSDictionary *)_cachedBag;
- (char)isInDebilitatedMode;
- (void)forceBagLoad;
- (NSString *)urlWithKey:(NSString *)arg0;
- (NSURL *)bagURL;
- (char)allowSelfSignedCertificates;
- (char)allowUnsignedBags;

@end

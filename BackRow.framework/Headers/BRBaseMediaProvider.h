/* Runtime dump - BRBaseMediaProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMediaLoading;
@protocol BRMediaProvider;

@class BRMediaType;
@interface BRBaseMediaProvider : NSObject <BRMediaProvider, BRMediaLoading>
{
    int _providerStatus;
    char _passwordProtected;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)errorStateOfProvider:(NSObject *)arg0;
+ (NSObject *)mediaProvider;

- (NSArray *)objectsWithEntityName:(NSString *)arg0 qualifiedByPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 error:(id *)arg3;
- (int)errorCodeForProvider;
- (NSString *)mediaForEntityName:(NSString *)arg0;
- (NSArray *)objectsWithEntityName:(NSString *)arg0 qualifiedByPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 excludeHiddenObjects:(char)arg3 error:(id *)arg4;
- (long)countOfObjectsWithMediaType:(BRMediaType *)arg0;
- (char)autoload;
- (char)isPasswordProtected;
- (void)setIsPasswordProtected:(char)arg0;
- (int)loadWithUsername:(NSString *)arg0 password:(NSString *)arg1;
- (void)dealloc;
- (void)flush;
- (void)reset;
- (NSSet *)mediaTypes;
- (int)load;
- (int)status;
- (void)setStatus:(int)arg0;
- (NSString *)providerID;
- (NSString *)providerName;
- (int)unload;

@end

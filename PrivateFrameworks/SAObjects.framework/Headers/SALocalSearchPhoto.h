/* Runtime dump - SALocalSearchPhoto
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * fullsize;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSURL * largeSize;
@property (copy, nonatomic) NSURL * maximumSize;
@property (retain, nonatomic) SAUIAppPunchOut * photoPunchOut;
@property (copy, nonatomic) NSURL * thumbnail;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLManagedAsset *)photo;
+ (NSDictionary *)photoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSURL *)maximumSize;
- (NSString *)groupIdentifier;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSURL *)thumbnail;
- (void)setThumbnail:(NSURL *)arg0;
- (void)setMaximumSize:(NSURL *)arg0;
- (NSString *)encodedClassName;
- (NSURL *)fullsize;
- (void)setFullsize:(NSURL *)arg0;
- (NSURL *)largeSize;
- (void)setLargeSize:(NSURL *)arg0;
- (SAUIAppPunchOut *)photoPunchOut;
- (void)setPhotoPunchOut:(SAUIAppPunchOut *)arg0;

@end

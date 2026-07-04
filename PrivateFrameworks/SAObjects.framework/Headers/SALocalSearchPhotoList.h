/* Runtime dump - SALocalSearchPhotoList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * photos;
@property (copy, nonatomic) NSString * providerId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)photoList;
+ (NSDictionary *)photoListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setPhotos:(NSArray *)arg0;
- (NSArray *)photos;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (NSString *)encodedClassName;

@end

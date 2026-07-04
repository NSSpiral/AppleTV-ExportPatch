/* Runtime dump - SAWebAcePicture
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * format;
@property (copy, nonatomic) NSNumber * height;
@property (copy, nonatomic) NSNumber * width;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWebAcePicture *)acePicture;
+ (NSDictionary *)acePictureWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)width;
- (NSNumber *)height;
- (void)setWidth:(NSNumber *)arg0;
- (void)setHeight:(NSNumber *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;
- (NSString *)encodedClassName;

@end

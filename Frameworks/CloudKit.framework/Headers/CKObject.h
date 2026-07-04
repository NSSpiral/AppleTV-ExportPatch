/* Runtime dump - CKObject
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObject : NSObject <CKPropertyCoding>

@property (readonly, nonatomic) CKObjCClass * objcClass;
@property (readonly, nonatomic) NSSet * propertyNamesNotToEncode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CKObjCClass *)objcClass;
- (NSSet *)propertyNamesNotToEncode;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKObject *)initWithPropertyDictionary:(NSDictionary *)arg0;
- (NSString *)dictionaryPropertyEncoding;

@end

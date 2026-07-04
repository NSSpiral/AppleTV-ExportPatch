/* Runtime dump - SAHAAttributeValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAAttributeValue : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * units;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (SAHAAttributeValue *)init;
- (NSString *)units;
- (void)setUnits:(NSString *)arg0;
- (NSString *)encodedClassName;

@end

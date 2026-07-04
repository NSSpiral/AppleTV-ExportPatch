/* Runtime dump - SSTonePurchase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying>
{
    NSArray * _allowedToneStyles;
    NSNumber * _assigneeIdentifier;
    NSString * _assigneeToneStyle;
    char _shouldMakeDefaultRingtone;
    char _shouldMakeDefaultTextTone;
}

@property (copy) NSArray * allowedToneStyles;
@property (retain) NSNumber * assigneeIdentifier;
@property (copy) NSString * assigneeToneStyle;
@property char shouldMakeDefaultRingtone;
@property char shouldMakeDefaultTextTone;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSTonePurchase *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSTonePurchase *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SSTonePurchase *)copyWithZone:(struct _NSZone *)arg0;
- (SSTonePurchase *)initWithItem:(SSItem *)arg0 offer:(NSDictionary *)arg1;
- (void)_setValuesUsingDatabaseEncoding:(NSString *)arg0;
- (void)_addEntriesToDatabaseEncoding:(NSString *)arg0;
- (NSArray *)allowedToneStyles;
- (void)setAllowedToneStyles:(NSArray *)arg0;
- (void)setAssigneeIdentifier:(NSNumber *)arg0;
- (void)setAssigneeToneStyle:(NSString *)arg0;
- (void)setShouldMakeDefaultRingtone:(char)arg0;
- (void)setShouldMakeDefaultTextTone:(char)arg0;
- (NSNumber *)assigneeIdentifier;
- (NSString *)assigneeToneStyle;
- (char)shouldMakeDefaultRingtone;
- (char)shouldMakeDefaultTextTone;

@end

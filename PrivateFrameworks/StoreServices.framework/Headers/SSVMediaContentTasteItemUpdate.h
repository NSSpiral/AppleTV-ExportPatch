/* Runtime dump - SSVMediaContentTasteItemUpdate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding>
{
    SSVMediaContentTasteItem * _item;
    NSDate * _updateDate;
}

@property (copy, nonatomic) SSVMediaContentTasteItem * item;
@property (copy, nonatomic) NSDate * updateDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaContentTasteItemUpdate *)initWithXPCEncoding:(NSString *)arg0;
- (SSVMediaContentTasteItemUpdate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SSVMediaContentTasteItem *)item;
- (void)setItem:(SSVMediaContentTasteItem *)arg0;
- (void).cxx_destruct;
- (NSDate *)updateDate;
- (void)setUpdateDate:(NSDate *)arg0;

@end

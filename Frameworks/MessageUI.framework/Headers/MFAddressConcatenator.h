/* Runtime dump - MFAddressConcatenator
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressConcatenator : NSObject
{
    NSString * _andNMoreFormat;
    NSString * _andNMoreNoEllipsisFormat;
    NSString * _oneAddressFormat;
    NSString * _nAddressesFormat;
    NSString * _truncatedAddressFormat;
}

@property (retain, nonatomic) NSString * andNMoreFormat;
@property (retain, nonatomic) NSString * andNMoreNoEllipsisFormat;
@property (retain, nonatomic) NSString * oneAddressFormat;
@property (retain, nonatomic) NSString * nAddressesFormat;
@property (retain, nonatomic) NSString * truncatedAddressFormat;

+ (MFAddressConcatenator *)defaultRecipientListConcatenator;

- (void)setAndNMoreFormat:(NSString *)arg0;
- (void)setAndNMoreNoEllipsisFormat:(NSString *)arg0;
- (void)setNAddressesFormat:(NSString *)arg0;
- (void)setOneAddressFormat:(NSString *)arg0;
- (void)setTruncatedAddressFormat:(NSString *)arg0;
- (void)getCommaSeparatedAddressList:(id *)arg0 andListSuffix:(NSString *)arg1 withAddressCount:(id *)arg2 prefixForAddressAtIndex:(NSObject *)arg3 stringForAddressAtIndex:(unsigned int)arg4 lengthValidationBlock:(id /* block */)arg5;
- (NSNumber *)commaSeparatedAddressListWithAddressCount:(unsigned int)arg0 prefixForAddressAtIndex:(NSObject *)arg1 stringForAddressAtIndex:(/* block */ id)arg2 lengthValidationBlock:(id /* block */)arg3;
- (NSString *)andNMoreFormat;
- (NSString *)andNMoreNoEllipsisFormat;
- (NSString *)oneAddressFormat;
- (NSString *)nAddressesFormat;
- (NSString *)truncatedAddressFormat;
- (void)dealloc;

@end

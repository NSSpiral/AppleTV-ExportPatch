/* Runtime dump - SSVDialogResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding>
{
    int _selectedButtonIndex;
    NSArray * _textFieldValues;
}

@property (nonatomic) int selectedButtonIndex;
@property (copy, nonatomic) NSArray * textFieldValues;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVDialogResponse *)initWithXPCEncoding:(NSString *)arg0;
- (SSVDialogResponse *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (int)selectedButtonIndex;
- (void)setSelectedButtonIndex:(int)arg0;
- (void)setTextFieldValues:(NSArray *)arg0;
- (NSArray *)textFieldValues;

@end

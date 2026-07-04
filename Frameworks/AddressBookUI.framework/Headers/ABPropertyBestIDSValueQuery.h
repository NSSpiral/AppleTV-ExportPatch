/* Runtime dump - ABPropertyBestIDSValueQuery
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyBestIDSValueQuery : NSObject
{
    NSMutableArray * _validIDSItems;
    <ABPropertyBestIDSValueQueryDelegate> * _delegate;
    NSArray * _propertyItems;
    ABPropertyIDSRequest * _idsRequest;
}

@property (retain) NSMutableArray * validIDSItems;
@property (readonly) ABPropertyGroupItem * bestIDSProperty;
@property (nonatomic) <ABPropertyBestIDSValueQueryDelegate> * delegate;
@property (retain, nonatomic) NSArray * propertyItems;
@property (retain, nonatomic) ABPropertyIDSRequest * idsRequest;

- (NSArray *)propertyItems;
- (NSMutableArray *)validIDSItems;
- (ABPropertyGroupItem *)bestIDSProperty;
- (ABPropertyBestIDSValueQuery *)initWithPropertyItems:(NSArray *)arg0 service:(NSObject *)arg1;
- (void)setPropertyItems:(NSArray *)arg0;
- (void)setValidIDSItems:(NSMutableArray *)arg0;
- (void)setIdsRequest:(ABPropertyIDSRequest *)arg0;
- (ABPropertyIDSRequest *)idsRequest;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyBestIDSValueQueryDelegate> *)arg0;
- (<ABPropertyBestIDSValueQueryDelegate> *)delegate;

@end

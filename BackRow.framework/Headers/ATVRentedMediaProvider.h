/* Runtime dump - ATVRentedMediaProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRProvider;
@protocol BRSelectionHandler;

@class BRControl;
@interface ATVRentedMediaProvider : NSObject <BRProvider, BRSelectionHandler, BRControlFactory>
{
    ATVDataType * _mediaType;
    ATVDataQuery * _dataQuery;
    NSMutableArray * _rentedMovies;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithMediaType:(ATVDataType *)arg0;

- (long)dataCount;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)_rentalQueryComplete;
- (void)_reloadRentals:(id)arg0;
- (void)_accountLoggedOut:(id)arg0;
- (void)dealloc;
- (ATVRentedMediaProvider *)init;
- (ATVRentedMediaProvider *)initWithMediaType:(ATVDataType *)arg0;
- (NSObject *)dataAtIndex:(long)arg0;

@end

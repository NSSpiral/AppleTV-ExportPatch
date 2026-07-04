/* Runtime dump - ABPropertyIDSRequest
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate>
{
    NSArray * _propertyItems;
    NSString * _listenerID;
    NSString * _service;
    id _requestResultBlock;
    id _idQueryResultHandler;
}

@property (retain, nonatomic) NSArray * propertyItems;
@property (retain, nonatomic) NSString * listenerID;
@property (retain, nonatomic) NSString * service;
@property (copy, nonatomic) id requestResultBlock;
@property (copy, nonatomic) id idQueryResultHandler;
@property (readonly, nonatomic) char cancelled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)idStatusUpdatedForDestinations:(id)arg0 service:(NSString *)arg1;
- (NSArray *)propertyItems;
- (ABPropertyIDSRequest *)initWithPropertyItems:(NSArray *)arg0 service:(NSString *)arg1 postToMainQueue:(char)arg2 resultBlock:(id /* block */)arg3;
- (void)setPropertyItems:(NSArray *)arg0;
- (void)setListenerID:(NSString *)arg0;
- (void)setRequestResultBlock:(id /* block */)arg0;
- (NSString *)listenerID;
- (void)_requestStatusOnMainQueue:(char)arg0;
- (id /* block */)requestResultBlock;
- (id /* block */)idQueryResultHandler;
- (void)setIdQueryResultHandler:(id /* block */)arg0;
- (void)cancel;
- (void)dealloc;
- (char)cancelled;
- (void)setService:(NSString *)arg0;
- (NSString *)service;

@end

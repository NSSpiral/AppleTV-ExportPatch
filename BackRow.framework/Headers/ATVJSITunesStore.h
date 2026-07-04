/* Runtime dump - ATVJSITunesStore
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext;
@interface ATVJSITunesStore : NSObject
{
    struct OpaqueJSValue * _jsObjectRef;
    ATVJSContext * _context;
    NSNumber * _lastAccountID;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) ATVJSContext * context;
@property (nonatomic) NSNumber * lastAccountID;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (ATVJSITunesStore *)initWithContext:(ATVJSContext *)arg0 jsContext:(struct OpaqueJSContext *)arg1;
- (void)_accountStoreChanged:(NSNotification *)arg0;
- (void)_URLBagDidLoad:(id)arg0;
- (NSNumber *)lastAccountID;
- (void)setLastAccountID:(NSNumber *)arg0;
- (void)dealloc;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)finalize;

@end

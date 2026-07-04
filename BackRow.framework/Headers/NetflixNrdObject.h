/* Runtime dump - NetflixNrdObject
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NetflixNrdObjectProtocol;
@interface NetflixNrdObject : NSObject <NetflixNrdObjectProtocol>
{
    NSMutableDictionary * pendingSetProp_;
    NSMutableDictionary * currentSetProp_;
}

@property (retain) NSMutableDictionary * pendingSetProp;
@property (retain) NSMutableDictionary * currentSetProp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixNrdObject *)sharedInstance;

- (void)setProperty:(NSString *)arg0 property:(NSString *)arg1 value:(NSObject *)arg2;
- (void)invoke:(id)arg0 method:(NSString *)arg1 args:(struct OpaqueJSValue * *)arg2;
- (void)post:(id)arg0;
- (NSMutableDictionary *)pendingSetProp;
- (void)setPendingSetProp:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)currentSetProp;
- (void)setCurrentSetProp:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NetflixNrdObject *)init;
- (void).cxx_destruct;

@end

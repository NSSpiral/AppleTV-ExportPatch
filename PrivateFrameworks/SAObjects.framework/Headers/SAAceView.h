/* Runtime dump - SAAceView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceView : AceObject <SAAceSerializable>

@property (retain, nonatomic) <SAAceSerializable> * context;
@property (copy, nonatomic) NSNumber * deferredRendering;
@property (copy, nonatomic) NSNumber * listenAfterSpeaking;
@property (copy, nonatomic) NSString * speakableText;
@property (copy, nonatomic) NSString * viewId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)aceView;
+ (NSDictionary *)aceViewWithDictionary:(NSDictionary *)arg0 context:(<SAAceSerializable> *)arg1;

- (NSString *)groupIdentifier;
- (<SAAceSerializable> *)context;
- (void)setContext:(<SAAceSerializable> *)arg0;
- (NSString *)encodedClassName;
- (NSNumber *)listenAfterSpeaking;
- (void)setListenAfterSpeaking:(NSNumber *)arg0;
- (NSString *)speakableText;
- (void)setSpeakableText:(NSString *)arg0;
- (NSNumber *)deferredRendering;
- (void)setDeferredRendering:(NSNumber *)arg0;
- (NSString *)viewId;
- (void)setViewId:(NSString *)arg0;

@end

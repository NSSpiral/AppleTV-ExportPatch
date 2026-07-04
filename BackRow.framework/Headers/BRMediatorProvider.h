/* Runtime dump - BRMediatorProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRProvider;

@class BRControl;
@interface BRMediatorProvider : NSObject <BRControlFactory, BRProvider>
{
    NSMutableArray * _activeMediators;
    NSMutableArray * _mediators;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRMediatorProvider *)providerWithMediator:(TSCHChartMediator *)arg0;
+ (NSArray *)providerWithControlArray:(NSArray *)arg0;
+ (BRMediatorProvider *)providerWithMediators:(NSMutableArray *)arg0;
+ (BRMediatorProvider *)providerWithControl:(BRControl *)arg0 identifier:(NSString *)arg1;
+ (NSArray *)providerWithControls:(NSArray *)arg0;
+ (NSArray *)providerWithMediatorArray:(NSArray *)arg0;
+ (BRMediatorProvider *)providerWithControlsAndIdentifiers:(id)arg0;
+ (NSString *)provider;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)addMediator:(TSCHChartMediator *)arg0;
- (void)_subscribeToNotificationsForMediator:(id)arg0;
- (BRMediatorProvider *)initWithMediators:(NSMutableArray *)arg0;
- (void)_insertMediator:(id)arg0 atIndex:(long)arg1;
- (void)_unsubscribeToNotificationsForMediator:(id)arg0;
- (NSMutableArray *)mediators;
- (void)removeMediator:(TSCHChartMediator *)arg0;
- (void)insertMediator:(id)arg0 after:(id)arg1;
- (void)insertMediator:(id)arg0 before:(id)arg1;
- (NSString *)mediatorWithIdentifier:(NSString *)arg0;
- (void)_activeStateChanged:(NSNotification *)arg0;
- (void)_controlChanged:(NSNotification *)arg0;
- (long)_activeInsertIndexForMediator:(id)arg0;
- (void)dealloc;
- (BRMediatorProvider *)init;
- (NSObject *)dataAtIndex:(long)arg0;

@end

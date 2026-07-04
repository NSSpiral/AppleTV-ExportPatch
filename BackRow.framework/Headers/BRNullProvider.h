/* Runtime dump - BRNullProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRNullProvider : NSObject <BRProvider>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRNullProvider *)sharedInstance;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (NSObject *)dataAtIndex:(long)arg0;

@end

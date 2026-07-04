/* Runtime dump - ATVDefaultBehavior
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVURLDocumentBehavior;

@class ATVURLDocument;
@interface ATVDefaultBehavior : NSObject <ATVURLDocumentBehavior>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)behaviorName;
- (NSObject *)document:(ATVURLDocument *)arg0 didFinishLoadingContent:(NSObject *)arg1;

@end

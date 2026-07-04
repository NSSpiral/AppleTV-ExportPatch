/* Runtime dump - TPEndnotePageGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPEndnotePageGenerator : NSObject <TPPageGenerator>
{
    TPFootnoteLayoutController * _footnoteLayoutController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)wantsPageInSectionHint:(id)arg0 withState:(NSObject *)arg1;
- (void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(NSObject *)arg1;
- (TPEndnotePageGenerator *)initWithFootnoteLayoutController:(TPFootnoteLayoutController *)arg0;
- (TPEndnotePageGenerator *)init;

@end

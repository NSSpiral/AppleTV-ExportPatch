/* Runtime dump - TPOrphanPageGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPOrphanPageGenerator : NSObject <TPPageGenerator>
{
    TPDocumentRoot * _documentRoot;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TPOrphanPageGenerator *)initWithDocumentRoot:(TPDocumentRoot *)arg0;
- (char)wantsPageInSectionHint:(id)arg0 withState:(NSObject *)arg1;
- (void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(NSObject *)arg1;
- (TPOrphanPageGenerator *)init;

@end

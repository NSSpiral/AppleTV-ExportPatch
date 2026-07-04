/* Runtime dump - TSWPChange
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying>
{
    TSWPStorage * _parentStorage;
    int _kind;
    TSWPChangeSession * _session;
    NSDate * _date;
    char _changeWasAddedToDocumentRoot;
}

@property (nonatomic) TSWPStorage * parentStorage;
@property (retain, nonatomic) TSWPChangeSession * session;
@property (retain, nonatomic) NSDate * date;
@property (readonly, nonatomic) char hidden;
@property (readonly, nonatomic) char isInsertion;
@property (readonly, nonatomic) char isDeletion;
@property (readonly, nonatomic) char showsMarkup;
@property (readonly, nonatomic) char showsHiddenDeletionMarkup;
@property (readonly, nonatomic) TSUColor * textMarkupColor;
@property (readonly, nonatomic) TSUColor * changeAdornmentsColor;
@property (nonatomic) char changeWasAddedToDocumentRoot;

- (TSWPChange *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (TSUColor *)textMarkupColor;
- (TSUColor *)changeAdornmentsColor;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (char)isDeletion;
- (TSWPStorage *)parentStorage;
- (char)isInsertion;
- (char)showsMarkup;
- (char)showsHiddenDeletionMarkup;
- (void)trackedTextDidChange;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(NSObject *)arg0 key:(NSString *)arg1;
- (char)changeWasAddedToDocumentRoot;
- (void)setChangeWasAddedToDocumentRoot:(char)arg0;
- (TSWPChange *)initWithContext:(NSObject *)arg0 kind:(int)arg1 session:(TSWPChangeSession *)arg2;
- (char)canMergeWithKind:(int)arg0 session:(TSWPChangeSession *)arg1;
- (char)isFromChangeSession:(NSObject *)arg0;
- (void)dealloc;
- (char)isHidden;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (TSWPChangeSession *)session;
- (void)setSession:(TSWPChangeSession *)arg0;

@end

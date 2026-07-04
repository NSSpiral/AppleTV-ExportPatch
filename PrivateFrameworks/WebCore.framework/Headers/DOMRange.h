/* Runtime dump - DOMRange
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) WebArchive * webArchive;
@property (readonly, copy, nonatomic) NSString * markupString;
@property (readonly) DOMNode * startContainer;
@property (readonly) int startOffset;
@property (readonly) DOMNode * endContainer;
@property (readonly) int endOffset;
@property (readonly) char collapsed;
@property (readonly) DOMNode * commonAncestorContainer;
@property (readonly, copy) NSString * text;

+ (NSObject *)rangeForFirstPosition:(NSObject *)arg0 second:(int)arg1;

- (id)mf_attachmentURLs;
- (void)mf_hoistRange;
- (NSObject *)mf_firstNode;
- (NSObject *)mf_lastNode;
- (void)mf_getBlockBoundaryParent:(id *)arg0 nextSibling:(id *)arg1 atStart:(char)arg2;
- (WebFrame *)webFrame;
- (struct CGRect)boundingRect;
- (struct CGRect)boundingRectAndInsideFixedPosition:(NSObject *)arg0;
- (NSObject *)asDomNode;
- (char)selectable;
- (id /* block */)parentBlock;
- (char)canShrinkDirectlyToTextOnly;
- (NSObject *)enclosingDocument;
- (NSObject *)asDomRange;
- (id)rangeOfContents;
- (char)isSameBlock:(id /* block */)arg0;
- (char)containsBlock:(id /* block */)arg0;
- (char)strictlyContainsBlock:(id /* block */)arg0;
- (NSObject *)largerParent;
- (char)rendersAsBlock;
- (void)unionWithRange:(NSObject *)arg0;
- (char)containsRange:(NSObject *)arg0;
- (WebArchive *)webArchive;
- (NSString *)markupString;
- (UITextPosition *)startPosition;
- (NSObject *)endPosition;
- (NSObject *)enclosingWordRange;
- (void)dealloc;
- (NSString *)description;
- (NSString *)text;
- (int)endOffset;
- (int)startOffset;
- (void)detach;
- (void)setStart:(SBJsonStreamWriterStateArrayStart *)arg0 offset:(int)arg1;
- (void)setEnd:(id)arg0 offset:(int)arg1;
- (DOMNode *)startContainer;
- (void)selectNodeContents:(id)arg0;
- (char)collapsed;
- (void)insertNode:(NSObject *)arg0;
- (void)setStartAfter:(id)arg0;
- (void)setEndAfter:(id)arg0;
- (NSString *)_text;
- (id)cloneContents;
- (NSObject *)cloneRange;
- (struct CGRect)boundingBox;
- (void)selectNode:(DOMHTMLSelectElement *)arg0;
- (DOMNode *)endContainer;
- (short)compareBoundaryPoints:(unsigned short)arg0 sourceRange:(NSObject *)arg1;
- (DOMNode *)commonAncestorContainer;
- (NSObject *)firstNode;
- (NSArray *)textRects;
- (id)lineBoxRects;
- (struct CGImage *)renderedImageForcingBlackText:(char)arg0;
- (void)finalize;
- (void)setStart:(SBJsonStreamWriterStateArrayStart *)arg0 :(int)arg1;
- (void)setEnd:(id)arg0 :(int)arg1;
- (void)setStartBefore:(id)arg0;
- (void)setEndBefore:(id)arg0;
- (void)collapse:(char)arg0;
- (short)compareBoundaryPoints:(unsigned short)arg0 :(id)arg1;
- (void)deleteContents;
- (id)extractContents;
- (void)surroundContents:(id)arg0;
- (NSString *)toString;
- (id)createContextualFragment:(id)arg0;
- (char)intersectsNode:(NSObject *)arg0;
- (short)compareNode:(NSObject *)arg0;
- (short)comparePoint:(NSObject *)arg0 offset:(int)arg1;
- (char)isPointInRange:(NSObject *)arg0 offset:(int)arg1;
- (void)expand:(id)arg0;
- (void)move:(unsigned long)arg0 inDirection:(int)arg1;
- (void)extend:(unsigned long)arg0 inDirection:(int)arg1;

@end

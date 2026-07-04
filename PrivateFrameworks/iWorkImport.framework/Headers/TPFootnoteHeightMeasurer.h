/* Runtime dump - TPFootnoteHeightMeasurer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer>
{
    TPFootnoteContainerLayout * _footnoteContainerLayout;
    TSDLayoutController * _layoutController;
    TSULRUCache * _footnoteLayoutCache;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)removeAllFootnoteReferenceStorages;
- (float)footnoteHeight;
- (void)removeFootnoteReferenceStorage:(id)arg0;
- (void)addFootnoteReferenceStorage:(id)arg0;
- (TPFootnoteHeightMeasurer *)initWithFootnoteMarkProvider:(<TSWPFootnoteMarkProvider> *)arg0 maxFootnoteWidth:(float)arg1 maxFootnoteHeight:(float)arg2 footnoteSpacing:(float)arg3;
- (void)setContainerWidth:(float)arg0;
- (void)setFootnoteSpacing:(int)arg0;
- (void)p_clearFootnoteLayoutCache;
- (void)dealloc;

@end

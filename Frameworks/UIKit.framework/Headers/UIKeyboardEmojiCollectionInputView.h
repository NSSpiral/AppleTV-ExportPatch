/* Runtime dump - UIKeyboardEmojiCollectionInputView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCollectionView * _collectionView;
    UICollectionViewFlowLayout * _flowLayout;
    int _category;
    int _currentSection;
    NSIndexPath * _tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    char _isDraggingInputView;
    id _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> * _hitTestResponder;
}

@property int category;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> * hitTestResponder;
@property (readonly) char isDraggingInputView;
@property (nonatomic) NSIndexPath * tappedSkinToneEmoji;
@property (copy, nonatomic) id completionBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(float)arg0;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg0 withVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (void)setHitTestResponder:(UIResponder<UIKBEmojiHitTestResponder> *)arg0;
- (NSString *)emojiBaseUnicodeString:(NSString *)arg0;
- (void)setTappedSkinToneEmoji:(NSIndexPath *)arg0;
- (char)skinToneWasUsedForEmoji:(id)arg0;
- (int)didInputSubTree:(id)arg0;
- (char)_userHasSelectedSkinToneEmoji;
- (id)selectedChildSkinToneEmoji:(id)arg0;
- (NSIndexPath *)tappedSkinToneEmoji;
- (void)_setUserHasSelectedSkinToneEmoji:(char)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)shouldDismissModalDisplayView:(NSObject *)arg0;
- (UIResponder<UIKBEmojiHitTestResponder> *)hitTestResponder;
- (float)snappedXOffsetForOffset:(float)arg0;
- (int)collectionView:(UIKeyboardEmojiCollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UIKeyboardEmojiCollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInCollectionView:(NSObject *)arg0;
- (NSObject *)collectionView:(UIKeyboardEmojiCollectionView *)arg0 viewForSupplementaryElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)reloadForCategory:(int)arg0;
- (int)reloadSectionForOffsetPercentage:(float)arg0;
- (void)setCategory:(int)arg0;
- (UIKeyboardEmojiCollectionInputView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (id)subTreeHitTest:(struct CGPoint)arg0;
- (void)willDisplayModalActionView:(NSObject *)arg0 withSubTreeKeyView:(NSObject *)arg1 completion:(id /* block */)arg2;
- (struct UIEdgeInsets)collectionView:(UIKeyboardEmojiCollectionView *)arg0 layout:(NSObject *)arg1 insetForSectionAtIndex:(int)arg2;
- (float)collectionView:(UIKeyboardEmojiCollectionView *)arg0 layout:(NSObject *)arg1 minimumLineSpacingForSectionAtIndex:(int)arg2;
- (float)collectionView:(UIKeyboardEmojiCollectionView *)arg0 layout:(NSObject *)arg1 minimumInteritemSpacingForSectionAtIndex:(int)arg2;
- (int)category;
- (char)isDraggingInputView;

@end

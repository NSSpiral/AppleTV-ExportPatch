/* Runtime dump - NSExtraLMData
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSExtraLMData : NSObject
{
    NSRunStorage * _attachmentSizesRun;
    struct CGRect _currentAttachmentRect;
    unsigned int _currentAttachmentIndex;
    id _fillHoleLock;
    NSRunStorage * _fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer * _firstTextContainer;
    struct __CFDictionary * _textContainerIndexes;
    struct __CFDictionary * _textContainerGlyphIndexes;
    int _typesetterBehavior;
    struct CGRect _cachedFontBounds;
    float _cachedUnderlineThickness;
    float _cachedUnderlinePosition;
    float _cachedUnderlineAdjustment;
    struct _NSRange _cachedUnderlineRange;
    NSMutableArray * _blockRunsArray;
    float _hyphenationFactor;
    NSMutableArray * _insertionPointCache;
    struct _NSGlyphTree _glyphTree;
    struct _NSLayoutTree _layoutTree;
    struct _NSRange _firstTextViewVisibleCharRange;
    struct CGSize _firstTextViewVisibleOffset;
    struct _NSRange _lastInvalidatedCharRange;
    float _lastInvalidatedLongitudinalPosition;
    NSTextContainer * _lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache * _rowArrayCache;
    struct __lmFlags2 _lmFlags2;
}

@end

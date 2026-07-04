/* Runtime dump - WebVisiblePosition
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal * _internal;
}

@property (nonatomic) int affinity;

+ (NSObject *)_wrapVisiblePosition:(struct VisiblePosition)arg0;
+ (WebVisiblePosition *)_wrapVisiblePositionIfValid:(struct VisiblePosition)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (char)isEditable;
- (int)affinity;
- (char)atBoundaryOfGranularity:(int)arg0 inDirection:(int)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg0 inDirectionIfAtBoundary:(int)arg1;
- (id)positionOfNextBoundaryOfGranularity:(int)arg0 inDirection:(int)arg1;
- (int)distanceFromPosition:(NSObject *)arg0;
- (id)positionByMovingInDirection:(int)arg0 amount:(unsigned long)arg1;
- (id)positionByMovingInDirection:(int)arg0 amount:(unsigned long)arg1 withAffinityDownstream:(char)arg2;
- (char)withinTextUnitOfGranularity:(int)arg0 inDirectionIfAtBoundary:(int)arg1;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)positionAtStartOrEndOfWord;
- (void)setAffinity:(int)arg0;
- (int)textDirection;
- (struct VisiblePosition)_visiblePosition;
- (char)directionIsDownstream:(int)arg0;
- (char)requiresContextForWordBoundary;
- (char)atAlphaNumericBoundaryInDirection:(int)arg0;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg0;

@end

/* Runtime dump - NSDocumentDifferenceSize
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSDocumentDifferenceSize : NSObject
{
    int _generationCount;
    int _changeCount;
}

@property (nonatomic) int generationCount;
@property (nonatomic) int changeCount;

- (NSString *)description;
- (int)changeCount;
- (int)generationCount;
- (void)setGenerationCount:(int)arg0;
- (void)setChangeCount:(int)arg0;

@end

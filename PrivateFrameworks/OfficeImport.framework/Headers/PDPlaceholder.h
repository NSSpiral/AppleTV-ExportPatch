/* Runtime dump - PDPlaceholder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDPlaceholder : NSObject
{
    int mType;
    int mOrientation;
    int mSize;
    int mIndex;
    int mBoundsTrack;
}

+ (char)isTextType:(int)arg0;

- (int)size;
- (PDPlaceholder *)init;
- (NSString *)description;
- (int)orientation;
- (void)setType:(int)arg0;
- (int)type;
- (void)setSize:(int)arg0;
- (int)index;
- (void)setOrientation:(int)arg0;
- (void)setIndex:(int)arg0;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)arg0;

@end

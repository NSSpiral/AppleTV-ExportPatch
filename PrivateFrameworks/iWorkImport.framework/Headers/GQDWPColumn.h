/* Runtime dump - GQDWPColumn
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPColumn : NSObject
{
    long mIndex;
    float mWidth;
    float mSpacing;
    char mHasSpacing;
}

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (float)width;
- (long)index;
- (char)hasSpacing;
- (float)spacing;

@end

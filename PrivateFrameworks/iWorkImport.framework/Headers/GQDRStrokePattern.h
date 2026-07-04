/* Runtime dump - GQDRStrokePattern
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRStrokePattern : NSObject
{
    int mType;
}

+ (NSObject *)solidPattern;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (int)type;

@end

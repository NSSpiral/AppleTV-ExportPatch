/* Runtime dump - BWFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFormat : NSObject

@property (readonly) unsigned long mediaType;
@property (readonly) struct opaqueCMFormatDescription * formatDescription;

+ (BWFormat *)formatByResolvingRequirements:(id)arg0;

- (struct opaqueCMFormatDescription *)formatDescription;
- (unsigned long)mediaType;

@end

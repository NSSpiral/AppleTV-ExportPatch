/* Runtime dump - BWFormatRequirements
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFormatRequirements : NSObject

@property (readonly) unsigned long mediaType;

- (BWFormatRequirements *)init;
- (Class)formatClass;
- (unsigned long)mediaType;

@end

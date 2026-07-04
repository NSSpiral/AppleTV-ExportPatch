/* Runtime dump - GCKOOBMessage
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GCKOOBMessage : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int band;
    NSData * data;
}

- (void)dealloc;
- (GCKOOBMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (GCKOOBMessage *)init;
- (unsigned int)type;
- (NSData *)data;
- (unsigned int)band;

@end

/* Runtime dump - GKOOBMessage
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKOOBMessage : NSObject
{
    unsigned short _type;
}

@property (readonly) unsigned short type;

- (unsigned short)type;
- (NSData *)data;
- (GKOOBMessage *)initWithBytes:(void *)arg0 length:(void)arg1;
- (char)_checkType:(unsigned short)arg0;
- (char)_checkSize:(unsigned long)arg0;
- (GKOOBMessage *)initWithMessageType:(unsigned short)arg0;

@end

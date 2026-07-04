/* Runtime dump - PLNetworkUtilities
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNetworkUtilities : NSObject

+ (PLNetworkUtilities *)tcpParse:(struct __CFData *)arg0 offset:(unsigned char)arg1;
+ (PLNetworkUtilities *)udpParse:(struct __CFData *)arg0 offset:(unsigned char)arg1;
+ (NSObject *)interfaceNameForIndex:(NSObject *)arg0;
+ (NSDictionary *)sockaddrToNSDictionary:(char *)arg0;
+ (NSObject *)stringFromTrafficClass:(unsigned int)arg0;
+ (NSData *)decodeIPPacket:(NSData *)arg0;
+ (NSObject *)decodeEtherType:(unsigned short)arg0;

@end

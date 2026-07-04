/* Runtime dump - VMUArchitecture
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUArchitecture : NSObject <NSCoding, NSCopying>
{
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (VMUArchitecture *)currentArchitecture;
+ (VMUArchitecture *)anyArchitecture;
+ (VMUArchitecture *)ppcArchitecture;
+ (VMUArchitecture *)ppc32Architecture;
+ (VMUArchitecture *)ppc64Architecture;
+ (VMUArchitecture *)i386Architecture;
+ (VMUArchitecture *)x86_32Architecture;
+ (VMUArchitecture *)x86_64Architecture;
+ (VMUArchitecture *)armArchitecture;
+ (NSObject *)architectureWithCpuType:(int)arg0 cpuSubtype:(int)arg1;

- (VMUArchitecture *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VMUArchitecture *)copyWithZone:(struct _NSZone *)arg0;
- (VMUArchitecture *)initWithCpuType:(int)arg0 cpuSubtype:(int)arg1;
- (char)isLittleEndian;
- (char)is64Bit;
- (int)cpuType;
- (int)cpuSubtype;
- (char)isEqualToArchitecture:(id)arg0;
- (char)is32Bit;
- (char)isBigEndian;
- (char)matchesArchitecture:(id)arg0;

@end

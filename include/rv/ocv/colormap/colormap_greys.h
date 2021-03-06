// Copyright (C) 2015 Institute for Computer Graphics and Vision (ICG),
//   Graz University of Technology (TU GRAZ)

// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. All advertising materials mentioning features or use of this software
//    must display the following acknowledgement:
//    This product includes software developed by the ICG, TU GRAZ.
// 4. Neither the name of the ICG, TU GRAZ nor the
//    names of its contributors may be used to endorse or promote products
//    derived from this software without specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY ICG, TU GRAZ ''AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL ICG, TU GRAZ BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef RV_OCV_COLORMAP_GREYS_H
#define RV_OCV_COLORMAP_GREYS_H

#include "colormap.h"

namespace rv {
namespace ocv {

template <typename Dtype>
class ColorMapGreys : public ColorMap<Dtype> {
public:
  static ColorMapGreys<Dtype>& i() {
    static ColorMapGreys<Dtype> instance;
    return instance;
  }
  
  virtual std::string name() const {
    return "cool_warm";
  }
  
protected:
  ColorMapGreys() {
    //init colors 
    this->map_.push_back(cv::Vec3b(255, 255, 255));
    this->map_.push_back(cv::Vec3b(254, 254, 254));
    this->map_.push_back(cv::Vec3b(254, 254, 254));
    this->map_.push_back(cv::Vec3b(253, 253, 253));
    this->map_.push_back(cv::Vec3b(253, 253, 253));
    this->map_.push_back(cv::Vec3b(252, 252, 252));
    this->map_.push_back(cv::Vec3b(252, 252, 252));
    this->map_.push_back(cv::Vec3b(251, 251, 251));
    this->map_.push_back(cv::Vec3b(251, 251, 251));
    this->map_.push_back(cv::Vec3b(250, 250, 250));
    this->map_.push_back(cv::Vec3b(250, 250, 250));
    this->map_.push_back(cv::Vec3b(249, 249, 249));
    this->map_.push_back(cv::Vec3b(249, 249, 249));
    this->map_.push_back(cv::Vec3b(248, 248, 248));
    this->map_.push_back(cv::Vec3b(248, 248, 248));
    this->map_.push_back(cv::Vec3b(247, 247, 247));
    this->map_.push_back(cv::Vec3b(247, 247, 247));
    this->map_.push_back(cv::Vec3b(247, 247, 247));
    this->map_.push_back(cv::Vec3b(246, 246, 246));
    this->map_.push_back(cv::Vec3b(246, 246, 246));
    this->map_.push_back(cv::Vec3b(245, 245, 245));
    this->map_.push_back(cv::Vec3b(245, 245, 245));
    this->map_.push_back(cv::Vec3b(244, 244, 244));
    this->map_.push_back(cv::Vec3b(244, 244, 244));
    this->map_.push_back(cv::Vec3b(243, 243, 243));
    this->map_.push_back(cv::Vec3b(243, 243, 243));
    this->map_.push_back(cv::Vec3b(242, 242, 242));
    this->map_.push_back(cv::Vec3b(242, 242, 242));
    this->map_.push_back(cv::Vec3b(241, 241, 241));
    this->map_.push_back(cv::Vec3b(241, 241, 241));
    this->map_.push_back(cv::Vec3b(240, 240, 240));
    this->map_.push_back(cv::Vec3b(240, 240, 240));
    this->map_.push_back(cv::Vec3b(239, 239, 239));
    this->map_.push_back(cv::Vec3b(239, 239, 239));
    this->map_.push_back(cv::Vec3b(238, 238, 238));
    this->map_.push_back(cv::Vec3b(237, 237, 237));
    this->map_.push_back(cv::Vec3b(237, 237, 237));
    this->map_.push_back(cv::Vec3b(236, 236, 236));
    this->map_.push_back(cv::Vec3b(235, 235, 235));
    this->map_.push_back(cv::Vec3b(234, 234, 234));
    this->map_.push_back(cv::Vec3b(234, 234, 234));
    this->map_.push_back(cv::Vec3b(233, 233, 233));
    this->map_.push_back(cv::Vec3b(232, 232, 232));
    this->map_.push_back(cv::Vec3b(231, 231, 231));
    this->map_.push_back(cv::Vec3b(231, 231, 231));
    this->map_.push_back(cv::Vec3b(230, 230, 230));
    this->map_.push_back(cv::Vec3b(229, 229, 229));
    this->map_.push_back(cv::Vec3b(229, 229, 229));
    this->map_.push_back(cv::Vec3b(228, 228, 228));
    this->map_.push_back(cv::Vec3b(227, 227, 227));
    this->map_.push_back(cv::Vec3b(226, 226, 226));
    this->map_.push_back(cv::Vec3b(226, 226, 226));
    this->map_.push_back(cv::Vec3b(225, 225, 225));
    this->map_.push_back(cv::Vec3b(224, 224, 224));
    this->map_.push_back(cv::Vec3b(224, 224, 224));
    this->map_.push_back(cv::Vec3b(223, 223, 223));
    this->map_.push_back(cv::Vec3b(222, 222, 222));
    this->map_.push_back(cv::Vec3b(221, 221, 221));
    this->map_.push_back(cv::Vec3b(221, 221, 221));
    this->map_.push_back(cv::Vec3b(220, 220, 220));
    this->map_.push_back(cv::Vec3b(219, 219, 219));
    this->map_.push_back(cv::Vec3b(218, 218, 218));
    this->map_.push_back(cv::Vec3b(218, 218, 218));
    this->map_.push_back(cv::Vec3b(217, 217, 217));
    this->map_.push_back(cv::Vec3b(216, 216, 216));
    this->map_.push_back(cv::Vec3b(215, 215, 215));
    this->map_.push_back(cv::Vec3b(215, 215, 215));
    this->map_.push_back(cv::Vec3b(214, 214, 214));
    this->map_.push_back(cv::Vec3b(213, 213, 213));
    this->map_.push_back(cv::Vec3b(212, 212, 212));
    this->map_.push_back(cv::Vec3b(211, 211, 211));
    this->map_.push_back(cv::Vec3b(210, 210, 210));
    this->map_.push_back(cv::Vec3b(209, 209, 209));
    this->map_.push_back(cv::Vec3b(208, 208, 208));
    this->map_.push_back(cv::Vec3b(207, 207, 207));
    this->map_.push_back(cv::Vec3b(207, 207, 207));
    this->map_.push_back(cv::Vec3b(206, 206, 206));
    this->map_.push_back(cv::Vec3b(205, 205, 205));
    this->map_.push_back(cv::Vec3b(204, 204, 204));
    this->map_.push_back(cv::Vec3b(203, 203, 203));
    this->map_.push_back(cv::Vec3b(202, 202, 202));
    this->map_.push_back(cv::Vec3b(201, 201, 201));
    this->map_.push_back(cv::Vec3b(200, 200, 200));
    this->map_.push_back(cv::Vec3b(200, 200, 200));
    this->map_.push_back(cv::Vec3b(199, 199, 199));
    this->map_.push_back(cv::Vec3b(198, 198, 198));
    this->map_.push_back(cv::Vec3b(197, 197, 197));
    this->map_.push_back(cv::Vec3b(196, 196, 196));
    this->map_.push_back(cv::Vec3b(195, 195, 195));
    this->map_.push_back(cv::Vec3b(194, 194, 194));
    this->map_.push_back(cv::Vec3b(193, 193, 193));
    this->map_.push_back(cv::Vec3b(193, 193, 193));
    this->map_.push_back(cv::Vec3b(192, 192, 192));
    this->map_.push_back(cv::Vec3b(191, 191, 191));
    this->map_.push_back(cv::Vec3b(190, 190, 190));
    this->map_.push_back(cv::Vec3b(189, 189, 189));
    this->map_.push_back(cv::Vec3b(188, 188, 188));
    this->map_.push_back(cv::Vec3b(187, 187, 187));
    this->map_.push_back(cv::Vec3b(186, 186, 186));
    this->map_.push_back(cv::Vec3b(184, 184, 184));
    this->map_.push_back(cv::Vec3b(183, 183, 183));
    this->map_.push_back(cv::Vec3b(182, 182, 182));
    this->map_.push_back(cv::Vec3b(181, 181, 181));
    this->map_.push_back(cv::Vec3b(179, 179, 179));
    this->map_.push_back(cv::Vec3b(178, 178, 178));
    this->map_.push_back(cv::Vec3b(177, 177, 177));
    this->map_.push_back(cv::Vec3b(176, 176, 176));
    this->map_.push_back(cv::Vec3b(175, 175, 175));
    this->map_.push_back(cv::Vec3b(173, 173, 173));
    this->map_.push_back(cv::Vec3b(172, 172, 172));
    this->map_.push_back(cv::Vec3b(171, 171, 171));
    this->map_.push_back(cv::Vec3b(170, 170, 170));
    this->map_.push_back(cv::Vec3b(168, 168, 168));
    this->map_.push_back(cv::Vec3b(167, 167, 167));
    this->map_.push_back(cv::Vec3b(166, 166, 166));
    this->map_.push_back(cv::Vec3b(165, 165, 165));
    this->map_.push_back(cv::Vec3b(164, 164, 164));
    this->map_.push_back(cv::Vec3b(162, 162, 162));
    this->map_.push_back(cv::Vec3b(161, 161, 161));
    this->map_.push_back(cv::Vec3b(160, 160, 160));
    this->map_.push_back(cv::Vec3b(159, 159, 159));
    this->map_.push_back(cv::Vec3b(157, 157, 157));
    this->map_.push_back(cv::Vec3b(156, 156, 156));
    this->map_.push_back(cv::Vec3b(155, 155, 155));
    this->map_.push_back(cv::Vec3b(154, 154, 154));
    this->map_.push_back(cv::Vec3b(153, 153, 153));
    this->map_.push_back(cv::Vec3b(151, 151, 151));
    this->map_.push_back(cv::Vec3b(149, 149, 149));
    this->map_.push_back(cv::Vec3b(148, 148, 148));
    this->map_.push_back(cv::Vec3b(147, 147, 147));
    this->map_.push_back(cv::Vec3b(146, 146, 146));
    this->map_.push_back(cv::Vec3b(145, 145, 145));
    this->map_.push_back(cv::Vec3b(143, 143, 143));
    this->map_.push_back(cv::Vec3b(142, 142, 142));
    this->map_.push_back(cv::Vec3b(141, 141, 141));
    this->map_.push_back(cv::Vec3b(140, 140, 140));
    this->map_.push_back(cv::Vec3b(139, 139, 139));
    this->map_.push_back(cv::Vec3b(138, 138, 138));
    this->map_.push_back(cv::Vec3b(137, 137, 137));
    this->map_.push_back(cv::Vec3b(136, 136, 136));
    this->map_.push_back(cv::Vec3b(135, 135, 135));
    this->map_.push_back(cv::Vec3b(134, 134, 134));
    this->map_.push_back(cv::Vec3b(132, 132, 132));
    this->map_.push_back(cv::Vec3b(131, 131, 131));
    this->map_.push_back(cv::Vec3b(130, 130, 130));
    this->map_.push_back(cv::Vec3b(129, 129, 129));
    this->map_.push_back(cv::Vec3b(128, 128, 128));
    this->map_.push_back(cv::Vec3b(127, 127, 127));
    this->map_.push_back(cv::Vec3b(126, 126, 126));
    this->map_.push_back(cv::Vec3b(125, 125, 125));
    this->map_.push_back(cv::Vec3b(124, 124, 124));
    this->map_.push_back(cv::Vec3b(123, 123, 123));
    this->map_.push_back(cv::Vec3b(122, 122, 122));
    this->map_.push_back(cv::Vec3b(120, 120, 120));
    this->map_.push_back(cv::Vec3b(119, 119, 119));
    this->map_.push_back(cv::Vec3b(118, 118, 118));
    this->map_.push_back(cv::Vec3b(117, 117, 117));
    this->map_.push_back(cv::Vec3b(116, 116, 116));
    this->map_.push_back(cv::Vec3b(115, 115, 115));
    this->map_.push_back(cv::Vec3b(114, 114, 114));
    this->map_.push_back(cv::Vec3b(113, 113, 113));
    this->map_.push_back(cv::Vec3b(112, 112, 112));
    this->map_.push_back(cv::Vec3b(111, 111, 111));
    this->map_.push_back(cv::Vec3b(110, 110, 110));
    this->map_.push_back(cv::Vec3b(109, 109, 109));
    this->map_.push_back(cv::Vec3b(108, 108, 108));
    this->map_.push_back(cv::Vec3b(107, 107, 107));
    this->map_.push_back(cv::Vec3b(106, 106, 106));
    this->map_.push_back(cv::Vec3b(105, 105, 105));
    this->map_.push_back(cv::Vec3b(104, 104, 104));
    this->map_.push_back(cv::Vec3b(102, 102, 102));
    this->map_.push_back(cv::Vec3b(101, 101, 101));
    this->map_.push_back(cv::Vec3b(100, 100, 100));
    this->map_.push_back(cv::Vec3b(99, 99, 99));
    this->map_.push_back(cv::Vec3b(98, 98, 98));
    this->map_.push_back(cv::Vec3b(97, 97, 97));
    this->map_.push_back(cv::Vec3b(96, 96, 96));
    this->map_.push_back(cv::Vec3b(95, 95, 95));
    this->map_.push_back(cv::Vec3b(94, 94, 94));
    this->map_.push_back(cv::Vec3b(93, 93, 93));
    this->map_.push_back(cv::Vec3b(92, 92, 92));
    this->map_.push_back(cv::Vec3b(91, 91, 91));
    this->map_.push_back(cv::Vec3b(90, 90, 90));
    this->map_.push_back(cv::Vec3b(89, 89, 89));
    this->map_.push_back(cv::Vec3b(88, 88, 88));
    this->map_.push_back(cv::Vec3b(87, 87, 87));
    this->map_.push_back(cv::Vec3b(86, 86, 86));
    this->map_.push_back(cv::Vec3b(85, 85, 85));
    this->map_.push_back(cv::Vec3b(84, 84, 84));
    this->map_.push_back(cv::Vec3b(83, 83, 83));
    this->map_.push_back(cv::Vec3b(82, 82, 82));
    this->map_.push_back(cv::Vec3b(80, 80, 80));
    this->map_.push_back(cv::Vec3b(79, 79, 79));
    this->map_.push_back(cv::Vec3b(78, 78, 78));
    this->map_.push_back(cv::Vec3b(76, 76, 76));
    this->map_.push_back(cv::Vec3b(75, 75, 75));
    this->map_.push_back(cv::Vec3b(73, 73, 73));
    this->map_.push_back(cv::Vec3b(72, 72, 72));
    this->map_.push_back(cv::Vec3b(71, 71, 71));
    this->map_.push_back(cv::Vec3b(69, 69, 69));
    this->map_.push_back(cv::Vec3b(68, 68, 68));
    this->map_.push_back(cv::Vec3b(66, 66, 66));
    this->map_.push_back(cv::Vec3b(65, 65, 65));
    this->map_.push_back(cv::Vec3b(64, 64, 64));
    this->map_.push_back(cv::Vec3b(62, 62, 62));
    this->map_.push_back(cv::Vec3b(61, 61, 61));
    this->map_.push_back(cv::Vec3b(59, 59, 59));
    this->map_.push_back(cv::Vec3b(58, 58, 58));
    this->map_.push_back(cv::Vec3b(56, 56, 56));
    this->map_.push_back(cv::Vec3b(55, 55, 55));
    this->map_.push_back(cv::Vec3b(54, 54, 54));
    this->map_.push_back(cv::Vec3b(52, 52, 52));
    this->map_.push_back(cv::Vec3b(51, 51, 51));
    this->map_.push_back(cv::Vec3b(49, 49, 49));
    this->map_.push_back(cv::Vec3b(48, 48, 48));
    this->map_.push_back(cv::Vec3b(47, 47, 47));
    this->map_.push_back(cv::Vec3b(45, 45, 45));
    this->map_.push_back(cv::Vec3b(44, 44, 44));
    this->map_.push_back(cv::Vec3b(42, 42, 42));
    this->map_.push_back(cv::Vec3b(41, 41, 41));
    this->map_.push_back(cv::Vec3b(40, 40, 40));
    this->map_.push_back(cv::Vec3b(38, 38, 38));
    this->map_.push_back(cv::Vec3b(37, 37, 37));
    this->map_.push_back(cv::Vec3b(35, 35, 35));
    this->map_.push_back(cv::Vec3b(34, 34, 34));
    this->map_.push_back(cv::Vec3b(33, 33, 33));
    this->map_.push_back(cv::Vec3b(32, 32, 32));
    this->map_.push_back(cv::Vec3b(31, 31, 31));
    this->map_.push_back(cv::Vec3b(30, 30, 30));
    this->map_.push_back(cv::Vec3b(29, 29, 29));
    this->map_.push_back(cv::Vec3b(27, 27, 27));
    this->map_.push_back(cv::Vec3b(26, 26, 26));
    this->map_.push_back(cv::Vec3b(25, 25, 25));
    this->map_.push_back(cv::Vec3b(24, 24, 24));
    this->map_.push_back(cv::Vec3b(23, 23, 23));
    this->map_.push_back(cv::Vec3b(22, 22, 22));
    this->map_.push_back(cv::Vec3b(20, 20, 20));
    this->map_.push_back(cv::Vec3b(19, 19, 19));
    this->map_.push_back(cv::Vec3b(18, 18, 18));
    this->map_.push_back(cv::Vec3b(17, 17, 17));
    this->map_.push_back(cv::Vec3b(16, 16, 16));
    this->map_.push_back(cv::Vec3b(15, 15, 15));
    this->map_.push_back(cv::Vec3b(13, 13, 13));
    this->map_.push_back(cv::Vec3b(12, 12, 12));
    this->map_.push_back(cv::Vec3b(11, 11, 11));
    this->map_.push_back(cv::Vec3b(10, 10, 10));
    this->map_.push_back(cv::Vec3b(9, 9, 9));
    this->map_.push_back(cv::Vec3b(8, 8, 8));
    this->map_.push_back(cv::Vec3b(6, 6, 6));
    this->map_.push_back(cv::Vec3b(5, 5, 5));
    this->map_.push_back(cv::Vec3b(4, 4, 4));
    this->map_.push_back(cv::Vec3b(3, 3, 3));
    this->map_.push_back(cv::Vec3b(2, 2, 2));
    this->map_.push_back(cv::Vec3b(1, 1, 1));
    this->map_.push_back(cv::Vec3b(0, 0, 0));
  }
  
private:
  ColorMapGreys(const ColorMapGreys<Dtype>& m);
  void operator=(const ColorMapGreys<Dtype>& m);
};


} //ns cv
} //ns rv

#endif

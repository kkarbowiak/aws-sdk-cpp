﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Image.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeImagesResponse
  {
  public:
    AWS_EC2_API DescribeImagesResponse();
    AWS_EC2_API DescribeImagesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImagesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the images.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }

    /**
     * <p>Information about the images.</p>
     */
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }

    /**
     * <p>Information about the images.</p>
     */
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeImagesResponse& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeImagesResponse& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeImagesResponse& AddImages(const Image& value) { m_images.push_back(value); return *this; }

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeImagesResponse& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeImagesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeImagesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Image> m_images;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
